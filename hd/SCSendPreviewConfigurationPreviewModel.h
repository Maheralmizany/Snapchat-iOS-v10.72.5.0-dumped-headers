//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCSendPreviewViewModel.h"

@class NSString, SCPreviewConfiguration, SCUserSession;

@interface SCSendPreviewConfigurationPreviewModel : NSObject <SCSendPreviewViewModel>
{
    SCUserSession *_userSession;
    SCPreviewConfiguration *_previewConfiguration;
}

+ (id)previewConfigurationWithGallerySnap:(id)arg1 cloudFile:(id)arg2 userSession:(id)arg3 magicMomentCache:(id)arg4;
- (void).cxx_destruct;
- (long long)shareType;
- (id)mediaView;
- (double)mediaViewAspectRatio;
- (long long)viewStyle;
- (id)chatMessage;
- (id)initWithUserSession:(id)arg1 previewConfiguration:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
