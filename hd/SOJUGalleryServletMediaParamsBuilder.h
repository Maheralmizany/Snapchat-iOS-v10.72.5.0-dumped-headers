//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSNumber, NSString;

@interface SOJUGalleryServletMediaParamsBuilder : NSObject
{
    NSNumber *_mediaType;
    NSString *_mediaId;
    NSString *_mediaMd5hash;
    NSNumber *_size;
    NSNumber *_createTime;
    NSString *_mediaFormat;
    NSArray *_facesList;
}

+ (id)withJUGalleryServletMediaParams:(id)arg1;
- (void).cxx_destruct;
- (id)setFacesList:(id)arg1;
- (id)setMediaFormat:(id)arg1;
- (id)setCreateTime:(id)arg1;
- (id)setSize:(id)arg1;
- (id)setMediaMd5hash:(id)arg1;
- (id)setMediaId:(id)arg1;
- (id)setMediaType:(id)arg1;
- (id)build;
- (id)setMediaFormatEnum:(long long)arg1;
- (id)setCreateTimeValue:(long long)arg1;
- (id)setSizeValue:(long long)arg1;
- (id)setMediaTypeEnum:(long long)arg1;
- (id)setMediaTypeValue:(int)arg1;

@end

