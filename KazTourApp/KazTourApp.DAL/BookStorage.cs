using KazTourApp.Shared.Models;
using LiteDB;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace KazTourApp.DAL
{
    public class BookStorage
    {
        public void AddClient(BookRecord record)
        {
            using (var db = new LiteDatabase(@"C:\Users\diasz\Desktop\Week2-Final\KazTourApp\KazTourApp.DAL\LiteDb.db"))
            {
                var bookings = db.GetCollection<BookRecord>("bookings");
                bookings.Insert(record);
            }
        }

        public List<BookRecord> ReadAll()
        {
            using (var db = new LiteDatabase(@"C:\Users\diasz\Desktop\Week2-Final\KazTourApp\KazTourApp.DAL\LiteDb.db"))
            {
                var bookings = db.GetCollection<BookRecord>("bookings");
                return bookings.FindAll().ToList();
            }
        }
    }
}
