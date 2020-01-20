//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCGroupSnapchatterRepository.h"

@class SCDocObjectContext, SCGroupSnapchatterRepository;

@interface SCDocObjectGroupSnapchatterRepository : NSObject <SCGroupSnapchatterRepository>
{
    SCDocObjectContext *_docObjectContext;
    SCGroupSnapchatterRepository *_groupSnapchatterRepository;
}

- (void).cxx_destruct;
- (id)_snapchatterFromGroupParticipant:(id)arg1;
- (void)snapchattersWithGroupIds:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)snapchattersWithGroupId:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)snapchatterWithGroupId:(id)arg1 username:(id)arg2 completionQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)snapchatterWithGroupId:(id)arg1 userId:(id)arg2 completionQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)initWithDocObjectContext:(id)arg1 groupsDataFetcher:(id)arg2;

@end

