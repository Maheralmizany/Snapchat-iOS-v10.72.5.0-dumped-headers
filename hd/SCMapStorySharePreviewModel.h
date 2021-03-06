//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCSendPreviewViewModel.h"

@class NSString, SCNetworkImage;

@interface SCMapStorySharePreviewModel : NSObject <SCSendPreviewViewModel>
{
    NSString *_title;
    NSString *_subtitle;
    SCNetworkImage *_thumbnail;
    id <SCImageDownloading> _imageDownloader;
}

- (void).cxx_destruct;
- (id)subtitle;
- (id)title;
- (long long)shareType;
- (id)mediaView;
- (long long)viewStyle;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 thumbnail:(id)arg3 imageDownloader:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

