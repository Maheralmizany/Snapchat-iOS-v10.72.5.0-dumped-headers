//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MediaUpdateListener.h"
#import "SCEventAnnouncing.h"
#import "SCSnapVideoFilterUpdateListener.h"

@class EphemeralMedia, NSObject<OS_dispatch_queue>, NSString, SCEventListenerAnnouncer, UIImage;

@interface SCSendToStoriesThumbnailProvider : NSObject <SCSnapVideoFilterUpdateListener, MediaUpdateListener, SCEventAnnouncing>
{
    NSObject<OS_dispatch_queue> *_announceQueue;
    SCEventListenerAnnouncer *_eventAnnouncer;
    EphemeralMedia *_previewEphemeralMedia;
    UIImage *_previewThumbnail;
}

+ (id)announcerIdentifier;
@property(readonly, nonatomic) UIImage *previewThumbnail; // @synthesize previewThumbnail=_previewThumbnail;
- (void).cxx_destruct;
- (void)videoFilterThumbnailDataDidUpdate;
- (void)mediaDataToUploadDidUpdate;
- (void)_removeEphemeralMediaListeners;
- (void)updateStoryThumbnailForEphemeralMedia:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
