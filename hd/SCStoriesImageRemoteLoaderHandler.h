//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, SCStoriesThumbnailInfo;

@interface SCStoriesImageRemoteLoaderHandler : NSObject
{
    SCStoriesThumbnailInfo *_thumbnailInfo;
    NSObject<OS_dispatch_queue> *_completionQueue;
    CDUnknownBlockType _completionBlock;
}

@property(readonly, copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *completionQueue; // @synthesize completionQueue=_completionQueue;
@property(readonly, copy, nonatomic) SCStoriesThumbnailInfo *thumbnailInfo; // @synthesize thumbnailInfo=_thumbnailInfo;
- (void).cxx_destruct;
- (id)initWithThumbnailInfo:(id)arg1 completionQueue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;

@end

