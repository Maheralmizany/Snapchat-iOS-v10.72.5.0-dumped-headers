//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@interface SCAShakeReportUpload : SCAUserTrackedEvent
{
}

- (void)prepareDictionary:(id)arg1;
- (void)setTotalFileSizeKb:(long long)arg1;
- (void)setShakeMetadata:(id)arg1;
- (void)setRetryCount:(long long)arg1;
- (void)setIndividualFileSizes:(id)arg1;
- (double)getPerUserSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;

@end

