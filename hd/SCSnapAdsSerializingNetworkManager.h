//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, PendingNetworkRequest;

@interface SCSnapAdsSerializingNetworkManager : NSObject
{
    id <SCSnapAdsNetworkAdapter> _networkAdapter;
    NSMutableArray *_pendingRequests;
    PendingNetworkRequest *_activeRequest;
}

- (void).cxx_destruct;
- (void)emitNextRequest;
- (void)onUserLogout;
- (void)submit:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (id)initWithNetworkAdapter:(id)arg1;

@end

