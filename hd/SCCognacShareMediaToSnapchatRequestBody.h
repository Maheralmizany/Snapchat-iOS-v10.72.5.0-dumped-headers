//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString, UIImage;

@interface SCCognacShareMediaToSnapchatRequestBody : NSObject
{
    _Bool _animated;
    NSString *_mediaId;
    UIImage *_stickerImage;
    NSData *_stickerImageData;
    double _width;
    double _height;
    double _centerX;
    double _centerY;
    double _rotation;
}

@property(nonatomic) double rotation; // @synthesize rotation=_rotation;
@property(nonatomic) double centerY; // @synthesize centerY=_centerY;
@property(nonatomic) double centerX; // @synthesize centerX=_centerX;
@property(nonatomic) double height; // @synthesize height=_height;
@property(nonatomic) double width; // @synthesize width=_width;
@property(nonatomic) _Bool animated; // @synthesize animated=_animated;
@property(copy, nonatomic) NSData *stickerImageData; // @synthesize stickerImageData=_stickerImageData;
@property(copy, nonatomic) UIImage *stickerImage; // @synthesize stickerImage=_stickerImage;
@property(copy, nonatomic) NSString *mediaId; // @synthesize mediaId=_mediaId;
- (void).cxx_destruct;

@end

