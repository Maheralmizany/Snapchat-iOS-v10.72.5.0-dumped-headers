//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCNMessagingFetchAndSyncFeedCallback.h"

@interface SCArroyoFetchAndSyncFeedCallback : NSObject <SCNMessagingFetchAndSyncFeedCallback>
{
    CDUnknownBlockType _successCallback;
    CDUnknownBlockType _failureCallback;
    CDUnknownBlockType _notBootstrappedCallback;
    CDUnknownBlockType _feedEntriesArrivedCallback;
}

- (void).cxx_destruct;
- (void)onBootstrapNotComplete;
- (void)onError:(long long)arg1;
- (void)onFetchAndSyncFeedComplete:(id)arg1 feedEntriesDeleted:(id)arg2 hasMoreEntries:(_Bool)arg3 resetFeed:(_Bool)arg4;
- (void)onFeedEntriesArrived:(id)arg1;
- (id)initWithSucccessCallback:(CDUnknownBlockType)arg1 failureCallback:(CDUnknownBlockType)arg2 notBootstrappedCallback:(CDUnknownBlockType)arg3 feedEntriesArrivedCallback:(CDUnknownBlockType)arg4;

@end
