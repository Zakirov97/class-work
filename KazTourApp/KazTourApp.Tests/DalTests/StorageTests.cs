using KazTourApp.DAL;
using KazTourApp.Shared.Models;
using Microsoft.VisualStudio.TestTools.UnitTesting;
using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace KazTourApp.Tests.DalTests
{
    [TestClass]
    public class StorageTests
    {
        [TestMethod]
        public void ShouldAddTourRecordToDb()
        {
            // Arrange
            string pathToFile = @"C:\Users\diasz\Desktop\Week2-Final\KazTourApp\KazTourApp.DAL\LiteDb.db";
            var tour = new TourRecord()
            {
                Id = 1,
                Name = "Tour to Japan",
                Country = "Japan",
                City = "Kyoto",
                StartTimes = new DateTime[] { new DateTime(2018, 08, 11) },
                DurationInDays = 7,
                Persons = 20,
                BasePriceForPerson = 800000
            };

            TourStorage storage = new TourStorage();
            int itemsCountBeforeInsert = storage.ReadAll().Count;

            // Act
            storage.AddTour(tour);

            // Assert
            Assert.IsTrue(File.Exists(pathToFile));

            TourStorage secondStorage = new TourStorage();
            int itemsCountAfterInsert = storage.ReadAll().Count;

            Assert.IsTrue(itemsCountBeforeInsert == itemsCountAfterInsert - 1);

        }
    }
}
