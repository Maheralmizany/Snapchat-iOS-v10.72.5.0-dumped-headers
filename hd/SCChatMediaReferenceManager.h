//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface SCChatMediaReferenceManager : NSObject
{
    id <SCPerforming> _performer;
    NSMutableDictionary *_mediaIdReferences;
}

- (void).cxx_destruct;
- (void)referencesForMediaId:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)removeReferenceToMedia:(id)arg1 forMessage:(id)arg2 conversationId:(id)arg3;
- (void)addReferenceToMediaId:(id)arg1 forMessage:(id)arg2 conversationId:(id)arg3;
- (id)init;

@end

