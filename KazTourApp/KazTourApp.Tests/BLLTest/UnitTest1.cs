using System;
using System.Collections.Generic;
using KazTourApp.DAL;
using KazTourApp.Shared.Models;
using Microsoft.VisualStudio.TestTools.UnitTesting;

namespace KazTourApp.Tests.BLLTest
{
    [TestClass]
    public class BuyTicket
    {
        [TestMethod]
        public void BuyTickets()
        {
            // Arrange
            List<TourRecord> tours = new List<TourRecord>();
            tours.Add(new TourRecord()
            {
                Id = 1,
                Name = "Tour to Japan",
                Country = "Japan",
                City = "Kyoto",
                StartTimes = new DateTime[] { new DateTime(2018, 08, 11) },
                BasePriceForPerson = 800000,
                Persons = 20,
                DurationInDays = 7
            });
            tours.Add(new TourRecord()
            {
                Id = 2,
                Name = "Tour to USA",
                Country = "USA",
                City = "Virginia",
                StartTimes = new DateTime[] { new DateTime(2018, 07, 11) },
                BasePriceForPerson = 300000,
                Persons = 20,
                DurationInDays = 7
            });
            TourStorage storage = new TourStorage();

            //Act

        }
    }
}
