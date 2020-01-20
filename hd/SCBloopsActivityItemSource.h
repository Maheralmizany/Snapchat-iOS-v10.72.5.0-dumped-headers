//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIActivityItemSource.h"

@class NSString, NSURL;

@interface SCBloopsActivityItemSource : NSObject <UIActivityItemSource>
{
    NSURL *_videoURL;
    NSURL *_gifURL;
}

@property(readonly, nonatomic) NSURL *gifURL; // @synthesize gifURL=_gifURL;
@property(readonly, nonatomic) NSURL *videoURL; // @synthesize videoURL=_videoURL;
- (void).cxx_destruct;
- (id)activityViewControllerPlaceholderItem:(id)arg1;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)gifActivityTypes;
- (id)initVideoURL:(id)arg1 gifURL:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

