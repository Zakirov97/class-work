using KazTourApp.DAL;
using KazTourApp.Shared.Models;
using KazTourApp.Shared.ViewModels;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace KazTourApp.BLL
{
    public class TourService
    {
        private TourStorage _tourStorage;
        private BookStorage _bookStorage;
        private ClientStorage _clientStorage;

        public List<TourRecord> FilterByCriteria(TourSearchRequest request)
        {
            List<TourRecord> allTours = _tourStorage.ReadAll();
            List<TourRecord> filteredTourRecords = new List<TourRecord>();


            foreach (var item in allTours)
            {
                if (item.Country == request.ToCountry)
                    foreach (var date in item.StartTimes)
                        for (int i = -request.DepartureDateOffset; i <= request.DepartureDateOffset; i++)
                            if (request.DepartureDate.AddDays(i) == date)
                                filteredTourRecords.Add(item);
            }
            return filteredTourRecords;
        }
        public void BuyTicket(TourSearchRequest tourReq)
        {
            List<TourRecord> allTours = _tourStorage.ReadAll();
            for (int i = 0; i < allTours.Count; i++)
                if (allTours[i].Country == tourReq.ToCountry)
                    allTours[i].Persons -= tourReq.PersonCount;

        }
        public int CalculateTourPopularity(TourRecord tourRecord)
        {
            List<TourRecord> allTours = _tourStorage.ReadAll();
            int TourPopularity = 0;
            for (int i = 0; i < allTours.Count; i++)
                if (tourRecord.Country == allTours[i].Country)
                    TourPopularity++;
            return TourPopularity;
        }
        public List<decimal> CalculateFinalPrice(TourSearchRequest tourReq, List<TourRecord> tourRecords)
        {
            List<decimal> FinalTourPrice = new List<decimal>();

            for (int i = 0; i < tourRecords.Count; i++)
            {
                if (tourRecords[i].Country == tourReq.ToCountry)
                {
                    decimal price = tourRecords[i].BasePriceForPerson;
                    for (int j = 0; j < tourRecords[i].StartTimes.Length; j++)
                    {
                        decimal fullPrice = tourRecords[i].BasePriceForPerson;
                        if (tourRecords[i].StartTimes[j].Day < 10)
                        {
                            fullPrice = (fullPrice / 100) * 10;
                        }
                        if (tourRecords[i].Persons < 3)
                        {
                            fullPrice = (fullPrice / 100) * 15;
                        }
                        FinalTourPrice.Add(fullPrice);
                    }
                    break;
                }

            }
            return FinalTourPrice;
        }
        public List<TourSearchResponse> GetTourSearchResponses(TourSearchRequest tourReq)
        {
            List<TourRecord> filtered = FilterByCriteria(tourReq);
            List<TourSearchResponse> list = new List<TourSearchResponse>();
            List<decimal> finalprices = CalculateFinalPrice(tourReq, filtered);
            for (int i = 0; i < filtered.Count; i++)
            {
                list.Add(new TourSearchResponse(filtered[i].Name, filtered[i].Country, CalculateTourPopularity(filtered[i]), finalprices[i]));
            }
            return list;
        }
        public TourService()
        {
            _tourStorage = new TourStorage();
        }
    }
}
