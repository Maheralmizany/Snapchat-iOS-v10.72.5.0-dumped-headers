//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSString;

@interface SCSnapAdsAdResponseRendition : NSObject <NSCopying, NSCoding>
{
    long long _width;
    long long _height;
    double _fileSize;
    NSString *_mediaUrl;
    long long _renditionType;
}

@property(nonatomic) long long renditionType; // @synthesize renditionType=_renditionType;
@property(copy, nonatomic) NSString *mediaUrl; // @synthesize mediaUrl=_mediaUrl;
@property(nonatomic) double fileSize; // @synthesize fileSize=_fileSize;
@property(nonatomic) long long height; // @synthesize height=_height;
@property(nonatomic) long long width; // @synthesize width=_width;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (long long)compareFileSize:(id)arg1;
- (id)getSizeStringBytes;
- (double)getAspectRatio;
- (long long)getQuality;
- (long long)getRenditionType;
- (double)getFileSize;
- (id)getMediaUrl;
- (long long)getWidth;
- (long long)getHeight;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMediaUrl:(id)arg1 width:(long long)arg2 height:(long long)arg3 fileSize:(double)arg4 renditionType:(long long)arg5;

@end

