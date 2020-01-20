//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCChatMediaDrawerBaseMedia.h"

@class NSString, NSURL, UIImage;

@interface SCChatMediaDrawerVideo : SCChatMediaDrawerBaseMedia
{
    NSURL *_segmentVideoUrl;
    UIImage *_image;
    NSString *_mediaId;
    double _duration;
    double _fileSize;
}

@property(readonly, nonatomic) double fileSize; // @synthesize fileSize=_fileSize;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, copy, nonatomic) NSString *mediaId; // @synthesize mediaId=_mediaId;
- (void).cxx_destruct;
- (double)_videoSizeWithAvasset:(id)arg1;
- (struct CGSize)getTargetSizeWithSourceSize:(struct CGSize)arg1 videoTargetAspectRatio:(double)arg2;
- (double)maxPixelSizeForUpload;
- (void)getVideoSizeIfNecessary:(CDUnknownBlockType)arg1;
- (void)fetchVideoURLWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchVideoWithSize:(struct CGSize)arg1 aspectRatio:(double)arg2 allowLowQuality:(_Bool)arg3 videoFilter:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)fetchOriginalVideoWithCompletion:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getAVAssetAsynchronously:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (id)miniThumbnailData;
- (_Bool)isZipped;
- (double)height;
- (double)width;
- (long long)mediaContentType;
- (void)prepareDataToUploadForMediaId:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)prepareUploadDataForVideo:(id)arg1 videoFilter:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)cancelThumbnailFetchRequest;
- (void)fetchImageWithSize:(struct CGSize)arg1 thumbnailType:(long long)arg2 allowLowQuality:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (id)initWithPHAsset:(id)arg1 segmentVideoUrl:(id)arg2;
- (id)initWithPHAsset:(id)arg1;

@end

