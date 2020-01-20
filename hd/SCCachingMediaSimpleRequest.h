//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCCachingMediaRequest.h"
#import "SCProgressReporting.h"

@class NSString, SCSentinel;

@interface SCCachingMediaSimpleRequest : NSObject <SCCachingMediaRequest, SCProgressReporting>
{
    SCSentinel *_sentinel;
    id <SCProgressReceiving> _progressReceiver;
}

@property(nonatomic) __weak id <SCProgressReceiving> progressReceiver; // @synthesize progressReceiver=_progressReceiver;
- (void).cxx_destruct;
- (void)cancel;
- (_Bool)isCancelled;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
