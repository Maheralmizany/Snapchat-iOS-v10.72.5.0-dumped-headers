//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSCalendar, NSDateFormatter, SCGalleryEncryptedDatabase;

@interface SCGalleryDatetimeIndexer : NSObject
{
    SCGalleryEncryptedDatabase *_galleryEncryptedDatabase;
    NSDateFormatter *_dateFormatter;
    NSCalendar *_calendar;
}

+ (id)timeParserDateFormatter;
+ (id)holidayMap;
- (void).cxx_destruct;
- (id)_timeOfDayForHour:(long long)arg1;
- (_Bool)_isDate:(id)arg1 betweenStartDate:(id)arg2 endDate:(id)arg3;
- (id)_seasonNamesForDate:(id)arg1 isInNorthernHemisphere:(_Bool)arg2;
- (id)resultsForSnap:(id)arg1;
- (id)dateStringForSnapCreationDate:(id)arg1;
- (id)initWithEncryptedDatabase:(id)arg1;

@end
