//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@interface SCAGalleryBackupError : SCAUserTrackedEvent
{
}

- (void)setStatusCode:(long long)arg1;
- (void)setOperationType:(long long)arg1;
- (void)setFromRetry:(_Bool)arg1;
- (void)setErrorMessage:(id)arg1;
- (void)setDetailStatusCode:(long long)arg1;
- (double)getPerUserSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;

@end
