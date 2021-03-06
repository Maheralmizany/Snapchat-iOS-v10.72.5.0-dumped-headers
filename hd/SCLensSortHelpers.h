//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCTraceEnabled.h"

@class NSString;

@interface SCLensSortHelpers : NSObject <SCTraceEnabled>
{
}

+ (id)extractLeftCarouselLensesFromLenses:(id)arg1;
+ (void)removeSnappablesFromLenses:(id)arg1;
+ (id)scheduledLensesFromLenses:(id)arg1 cameraPosition:(unsigned long long)arg2;
+ (id)scanUnlockedLensesFromLenses:(id)arg1;
+ (id)backGeoLensesFromLenses:(id)arg1 forceSponsoredLensBackSection:(_Bool)arg2;
+ (id)frontGeoLensesFromLenses:(id)arg1 forceSponsoredLensBackSection:(_Bool)arg2;
+ (void)sortLensesByAbsoluteCarouselPosition:(id)arg1 cameraPosition:(unsigned long long)arg2;
+ (id)sortedLensesWithCarouselPositionFromLenses:(id)arg1 cameraPosition:(unsigned long long)arg2;
+ (void)addLens:(id)arg1 toLensesMutableArray:(id)arg2 ifNotFoundInLensesArray:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

