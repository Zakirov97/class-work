using System;
using System.Text;
using System.Collections.Generic;
using Microsoft.VisualStudio.TestTools.UnitTesting;
using KazTourApp.Shared.Models;

namespace KazTourApp.Tests.BLLTest
{
    [TestClass]
    public class TourServiceTests
    {
        [TestMethod]
        public void should_find_ByCriteria()
        {
            List<TourRecord> tours = new List<TourRecord>();
            tours.Add(new TourRecord()
            {
                Id = 1,
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
        }
    }
}
