//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCDocObjectContext, SCLazy, SCSnapchattersFetchService;

@interface SCSnapchattersFetchRequestCoordinator : NSObject
{
    SCDocObjectContext *_docObjectContext;
    id <SCPerforming> _docObjectPerformer;
    id <SCPerforming> _servicePerformer;
    SCSnapchattersFetchService *_fetchService;
    SCLazy *_userInfoRepository;
    SCLazy *_friendmojiRegistry;
}

- (void).cxx_destruct;
- (void)_processFetchFriendsResponse:(id)arg1 userInfoRepository:(id)arg2 error:(id)arg3 completionQueue:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)_fetchFriendsWithFetchRequest:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)handleSoJuFriendsResponse:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)fetchFriendsWithFetchRequest:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithDocObjectContext:(id)arg1 docObjectPerformer:(id)arg2 servicePerformer:(id)arg3 fetchService:(id)arg4 userInfoRepository:(id)arg5 friendmojiRegistry:(id)arg6;

@end
