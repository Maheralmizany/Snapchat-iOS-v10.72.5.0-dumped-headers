//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSString;

@interface SOJUGalleryServletSmartShareUploadRequestBuilder : NSObject
{
    NSString *_mediaId;
    NSNumber *_mediaType;
    NSString *_mediaKey;
    NSString *_mediaIv;
    NSString *_snapId;
    NSNumber *_destination;
    NSNumber *_orientation;
}

+ (id)withJUGalleryServletSmartShareUploadRequest:(id)arg1;
- (void).cxx_destruct;
- (id)setOrientation:(id)arg1;
- (id)setDestination:(id)arg1;
- (id)setSnapId:(id)arg1;
- (id)setMediaIv:(id)arg1;
- (id)setMediaKey:(id)arg1;
- (id)setMediaType:(id)arg1;
- (id)setMediaId:(id)arg1;
- (id)build;
- (id)setOrientationEnum:(long long)arg1;
- (id)setOrientationValue:(int)arg1;
- (id)setDestinationEnum:(long long)arg1;
- (id)setDestinationValue:(int)arg1;
- (id)setMediaTypeValue:(int)arg1;

@end

