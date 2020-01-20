//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSArray, NSDate, NSString;

@interface SCScheduledLensControllerMemento : NSObject <NSCoding, NSCopying>
{
    NSDate *_nextFetchDate;
    NSString *_preselectedLensId;
    NSArray *_activeScheduledLenses;
    NSArray *_activeRearScheduledLenses;
    NSArray *_preCachedScheduledLenses;
    NSDate *_fetcherPreviousUpdateTimestamp;
}

+ (void)removeSavedStateUsingArchiveUtils:(id)arg1;
+ (id)stateFromDiskUsingArchiveUtils:(id)arg1;
+ (id)_pathWithArchiveUtils:(id)arg1;
@property(retain, nonatomic) NSDate *fetcherPreviousUpdateTimestamp; // @synthesize fetcherPreviousUpdateTimestamp=_fetcherPreviousUpdateTimestamp;
@property(retain, nonatomic) NSArray *preCachedScheduledLenses; // @synthesize preCachedScheduledLenses=_preCachedScheduledLenses;
@property(retain, nonatomic) NSArray *activeRearScheduledLenses; // @synthesize activeRearScheduledLenses=_activeRearScheduledLenses;
@property(retain, nonatomic) NSArray *activeScheduledLenses; // @synthesize activeScheduledLenses=_activeScheduledLenses;
@property(retain, nonatomic) NSString *preselectedLensId; // @synthesize preselectedLensId=_preselectedLensId;
@property(retain, nonatomic) NSDate *nextFetchDate; // @synthesize nextFetchDate=_nextFetchDate;
- (void).cxx_destruct;
- (void)saveUsingArchiveUtils:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_ensureNonNilObjects;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end
