//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSString, SCUnlockableGeoFilterTracker, SOJUUnlockablesAttachment;

@interface SCFilterAttachmentOperaViewingSession : NSObject
{
    SOJUUnlockablesAttachment *_attachment;
    NSString *_filterId;
    SCUnlockableGeoFilterTracker *_geofilterTracker;
    NSDate *_attachmentOpenTimestamp;
    double _attachmentViewOpened;
    double _durationInAttachmentView;
    _Bool _isAttachmentOpen;
}

- (void).cxx_destruct;
- (void)_logGeofilterAttachmentView;
- (void)_trackUnlockableAttachmentView;
- (void)closeAttachment;
- (void)openAttachment;
- (id)initWithAttachment:(id)arg1 filterId:(id)arg2 geofilterTracker:(id)arg3;

@end

