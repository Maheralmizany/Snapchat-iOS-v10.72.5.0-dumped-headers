//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class LSATexture, LSAYUVTexture;

@interface LSAProcessingOutput : NSObject
{
    LSATexture *_rgbaTexture;
    LSAYUVTexture *_yuvTexture;
}

@property(readonly, nonatomic) LSAYUVTexture *yuvTexture; // @synthesize yuvTexture=_yuvTexture;
@property(readonly, nonatomic) LSATexture *rgbaTexture; // @synthesize rgbaTexture=_rgbaTexture;
- (void).cxx_destruct;
- (id)initWithRGBATexture:(id)arg1 YUVTexture:(id)arg2;

@end

