//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCNMessagingFetchFeedCallback.h"

@interface SCArroyoFetchFeedCallback : NSObject <SCNMessagingFetchFeedCallback>
{
    CDUnknownBlockType _successCallback;
    CDUnknownBlockType _failureCallback;
}

- (void).cxx_destruct;
- (void)onError:(long long)arg1;
- (void)onFetchFeedComplete:(id)arg1 hasMoreEntries:(_Bool)arg2;
- (id)initWithSuccessCallback:(CDUnknownBlockType)arg1 failureCallback:(CDUnknownBlockType)arg2;

@end

