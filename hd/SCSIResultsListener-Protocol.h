//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, SCPNSceneIntResponse;

@protocol SCSIResultsListener <NSObject>
- (void)backend:(id <SCSIResultsBackend>)arg1 request:(id <SCSIBackendRequest>)arg2 receivedError:(NSError *)arg3;
- (void)backend:(id <SCSIResultsBackend>)arg1 request:(id <SCSIBackendRequest>)arg2 receivedResponse:(SCPNSceneIntResponse *)arg3;
- (void)backend:(id <SCSIResultsBackend>)arg1 willProcessRequest:(id <SCSIBackendRequest>)arg2;
@end

