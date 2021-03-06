//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "LSALensAnalyticsDataComponentDelegate.h"

@class LSALensAnalyticsDataComponent, NSString, SCLensAnalyticsDataStore;

@interface SCLensAnalyticsDataManger : NSObject <LSALensAnalyticsDataComponentDelegate>
{
    SCLensAnalyticsDataStore *_lensAnalyticsDataStore;
    LSALensAnalyticsDataComponent *_lensAnalyticsDataComponent;
}

@property(retain, nonatomic) LSALensAnalyticsDataComponent *lensAnalyticsDataComponent; // @synthesize lensAnalyticsDataComponent=_lensAnalyticsDataComponent;
@property(retain, nonatomic) SCLensAnalyticsDataStore *lensAnalyticsDataStore; // @synthesize lensAnalyticsDataStore=_lensAnalyticsDataStore;
- (void).cxx_destruct;
- (void)lensDataComponent:(id)arg1 didRequestLensDataForEffectId:(id)arg2;
- (id)initWithLensAnalyticsDataComponent:(id)arg1 lensAnalyticsDataStore:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

