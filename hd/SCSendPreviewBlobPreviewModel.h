//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCSendPreviewViewModel.h"

@class NSString, SCPreviewBlob, SCPreviewConfiguration, SCUserSession;

@interface SCSendPreviewBlobPreviewModel : NSObject <SCSendPreviewViewModel>
{
    SCPreviewBlob *_previewBlob;
    SCUserSession *_userSession;
    SCPreviewConfiguration *_previewConfiguration;
    _Bool _isLaguna;
}

- (void).cxx_destruct;
- (void)setPreviewBlobImage:(id)arg1;
- (long long)shareType;
- (id)mediaView;
- (double)mediaViewAspectRatio;
- (long long)viewStyle;
- (id)chatMessage;
- (void)_scalePreviewBlobIfNeeded:(id)arg1;
- (id)initWithPreviewBlob:(id)arg1 userSession:(id)arg2 previewConfiguration:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

