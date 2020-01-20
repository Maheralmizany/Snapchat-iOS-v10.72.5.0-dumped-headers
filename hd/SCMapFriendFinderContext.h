//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCComposerMarshallableObject.h"

@class NSArray;

@interface SCMapFriendFinderContext : SCComposerMarshallableObject
{
    CDUnknownBlockType _tappedUser;
    id <SCCFriendStoring> _friendStore;
    id <SCComposerNetworkingClientProtocol> _networkingClient;
    id <SCMapFriendFinderPersonProvider> _mapFriendFinderProvider;
    NSArray *_mapBestFriendIds;
}

@property(copy, nonatomic) NSArray *mapBestFriendIds; // @synthesize mapBestFriendIds=_mapBestFriendIds;
@property(retain, nonatomic) id <SCMapFriendFinderPersonProvider> mapFriendFinderProvider; // @synthesize mapFriendFinderProvider=_mapFriendFinderProvider;
@property(retain, nonatomic) id <SCComposerNetworkingClientProtocol> networkingClient; // @synthesize networkingClient=_networkingClient;
@property(retain, nonatomic) id <SCCFriendStoring> friendStore; // @synthesize friendStore=_friendStore;
@property(copy, nonatomic) CDUnknownBlockType tappedUser; // @synthesize tappedUser=_tappedUser;
- (void).cxx_destruct;
- (long long)pushToComposerMarshaller:(struct SCComposerMarshaller *)arg1;
- (id)initWithTappedUser:(CDUnknownBlockType)arg1 friendStore:(id)arg2 networkingClient:(id)arg3 mapFriendFinderProvider:(id)arg4;
- (id)initWithTappedUser:(CDUnknownBlockType)arg1 friendStore:(id)arg2 networkingClient:(id)arg3 mapFriendFinderProvider:(id)arg4 mapBestFriendIds:(id)arg5;

@end
