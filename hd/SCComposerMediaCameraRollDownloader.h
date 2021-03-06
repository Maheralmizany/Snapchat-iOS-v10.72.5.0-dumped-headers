//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCComposerImageLoader.h"

@class NSString;

@interface SCComposerMediaCameraRollDownloader : NSObject <SCComposerImageLoader>
{
}

+ (_Bool)isMediaURL:(id)arg1;
+ (id)imageURLForAssetId:(id)arg1 targetSize:(struct CGSize)arg2;
+ (id)imageURLForAssetId:(id)arg1;
- (id)loadImageWithURL:(id)arg1 sourceView:(id)arg2 completion:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

