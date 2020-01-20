//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCGroupsStorage.h"

@class NSDictionary, NSString, SCQueuePerformer;

@interface SCArroyoGroupsStorage : NSObject <SCGroupsStorage>
{
    NSDictionary *_inMemoryGroupStorage;
    SCQueuePerformer *_performer;
}

- (void).cxx_destruct;
- (void)removeGroupById:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)putGroup:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)putGroups:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)groupById:(id)arg1;
- (id)allGroups;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

