//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCSendPreviewViewModel.h"

@class NSString, SCUserSession;

@interface SCSendGallerySnapPreviewModel : NSObject <SCSendPreviewViewModel>
{
    id <SCGallerySnap> _gallerySnap;
    id <SCGalleryEntry> _galleryEntry;
    SCUserSession *_userSession;
}

- (void).cxx_destruct;
- (long long)shareType;
- (id)chatMessage;
- (id)mediaView;
- (double)mediaViewAspectRatio;
- (long long)viewStyle;
- (id)initWithGallerySnap:(id)arg1 userSession:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

