//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SCSendPreviewMediaView.h"

@class NSString, SCNetworkImage, SCNetworkImageView;

@interface SCSearchNetworkImagePreviewView : UIView <SCSendPreviewMediaView>
{
    SCNetworkImageView *_networkImageView;
}

- (void).cxx_destruct;
- (void)layoutSubviews;
@property(retain, nonatomic) SCNetworkImage *networkImage;
- (id)initWithImageDownloader:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

