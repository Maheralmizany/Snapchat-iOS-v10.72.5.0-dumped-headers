//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData;

@interface SCAdTopMediaContent : NSObject
{
    unsigned long long _subtype;
    id <SCNContentManagerContentResult> _videoResult;
    NSData *_firstFrameImageData;
    NSData *_imageData;
}

+ (id)topMediaContentWithImageData:(id)arg1;
+ (id)topMediaContentWithVideoResult:(id)arg1 firstFrameImageData:(id)arg2;
- (void).cxx_destruct;
- (void)matchVideoContent:(CDUnknownBlockType)arg1 imageContent:(CDUnknownBlockType)arg2;
- (id)internalInit;

@end

