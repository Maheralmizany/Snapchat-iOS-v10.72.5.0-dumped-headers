//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCCheckInOptionReporter.h"

@class SCMapSnapTokenService;

@interface SCCheckInOptionReporter : NSObject <SCCheckInOptionReporter>
{
    id <SCLocationProvider> _locationProvider;
    SCMapSnapTokenService *_mapSnapTokenService;
}

- (void).cxx_destruct;
- (void)reportCheckInOption:(id)arg1 userFeedbackType:(long long)arg2 userFeedbackText:(id)arg3 completion:(CDUnknownBlockType)arg4 completionQueue:(id)arg5;
- (id)initWithLocationProvider:(id)arg1 mapSnapTokenService:(id)arg2;

@end

