//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCRefreshableDebugViewDelegate.h"

@class NSString, SCGallerySearchIndexer, SCRefreshableDebugView;

@interface SCGalleryIndexStatusDebugController : NSObject <SCRefreshableDebugViewDelegate>
{
    SCRefreshableDebugView *_debugView;
    SCGallerySearchIndexer *_gallerySearchIndexer;
}

- (void).cxx_destruct;
- (void)debugViewDidTapRefresh:(id)arg1;
- (void)show;
- (id)initWithGallerySearchIndexer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

