//using System;
//using System.Collections.Generic;
//using System.Diagnostics.CodeAnalysis;
//using System.Linq;
//using System.Text;

//namespace Baekjoon_CSharp
//{
//    internal class _8979_Olympic
//    {
//        struct Record
//        {
//            public int country;
//            public int gold;
//            public int silver;
//            public int bronze;
//        }

//        class RecordComparer : IComparer<Record>
//        {
//            public int Compare([AllowNull] Record record1, [AllowNull] Record record2)
//            {
//                if (record1.gold != record2.gold) return record2.gold - record1.gold;

//                if (record1.silver != record2.silver) return record2.silver - record1.silver;

//                if (record1.bronze != record2.bronze) return record2.bronze - record1.bronze;

//                return 0;
//            }
//        }

//        static void Main(string[] arg)
//        {
//            var nm = Console.ReadLine().Split().Select(int.Parse).ToList();
//            int n = nm[0];
//            int m = nm[1];

//            List<Record> records = new List<Record>();
//            for(int i = 0; i < n; i++) 
//            {
//                var cgsb = Console.ReadLine().Split().Select(int.Parse).ToList();
//                int country = cgsb[0];
//                int gold = cgsb[1];
//                int silver = cgsb[2];
//                int bronze = cgsb[3];

//                Record record = new Record() 
//                { 
//                    country = country,
//                    gold = gold,
//                    silver = silver,
//                    bronze = bronze
//                }; 

//                records.Add(record);
//            }

//            var recordComparer = new RecordComparer();
//            records.Sort(recordComparer);

//            for(int i = 0; i < records.Count; i++) 
//            {
//                if(records[i].country == m)
//                {
//                    // 거슬러 올라가서 동점이면 계속 i--해준다.
//                    while(i - 1 >= 0 && recordComparer.Compare(records[i - 1], records[i]) == 0)
//                        i--;

//                    Console.WriteLine(i + 1);
//                    break;
//                }
//            }

//        }
//    }
//}
