//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCBitmojiImageJob.h"

@class SCBitmojiImageTransformer;

@interface SCBitmojiFetchImageParentJob : SCBitmojiImageJob
{
    CDUnknownBlockType _completionBlock;
    SCBitmojiImageTransformer *_transformer;
}

- (void).cxx_destruct;
- (void)completeWithImageData:(id)arg1 decodedImage:(id)arg2 responseContext:(id)arg3;
- (id)initFromChild:(id)arg1 catalogEntryData:(const CDStruct_369cfc16 *)arg2 completionQueue:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;

@end

