//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, SOJUSticker;

@interface SCCustomStickerImageFetchJob : NSObject
{
    NSMutableArray *_completionBlocks;
    SOJUSticker *_sojuSticker;
}

@property(readonly, nonatomic) SOJUSticker *sojuSticker; // @synthesize sojuSticker=_sojuSticker;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToJob:(id)arg1;
- (void)completeWithImage:(id)arg1;
- (void)addCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithSticker:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;

@end

