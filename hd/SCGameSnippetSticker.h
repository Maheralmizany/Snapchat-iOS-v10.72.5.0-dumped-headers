//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCStickerProtocol.h"

@class NSString, SOJUSticker, UIImage;

@interface SCGameSnippetSticker : NSObject <SCStickerProtocol>
{
    UIImage *_image;
    NSString *_stickerId;
    SOJUSticker *_sojuSticker;
}

+ (id)_cacheKeyWithStickerId:(id)arg1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)imageWithUserSession:(id)arg1 contexts:(id)arg2 isDecoded:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (id)stickerStateWithRelativeSize:(struct CGSize)arg1 center:(struct CGPoint)arg2 rotation:(double)arg3 scale:(double)arg4 isTracking:(_Bool)arg5 trackingTrajectory:(id)arg6 isFlipped:(_Bool)arg7;
- (unsigned long long)type;
- (id)toSOJUSticker;
- (id)stickerId;
- (id)shortLoggingName;
- (id)packId;
- (id)loggingParameters;
- (id)initWithStickerId:(id)arg1;
- (id)initWithImage:(id)arg1 imageData:(id)arg2 stickerId:(id)arg3 userSession:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

