//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@interface SCAAppStorageUsage : SCAUserTrackedEvent
{
}

- (void)setStorageUsageTotalMB:(long long)arg1;
- (void)setStorageUsageTemporaryMB:(long long)arg1;
- (void)setStorageUsageGalleryMB:(long long)arg1;
- (void)setStorageUsageFilesMB:(long long)arg1;
- (void)setStorageUsageDocumentMB:(long long)arg1;
- (void)setStorageUsageCacheMB:(long long)arg1;
- (void)setStorageSpaceTotalMB:(long long)arg1;
- (void)setStorageSpaceFreeMB:(long long)arg1;
- (double)getPerUserSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;

@end

