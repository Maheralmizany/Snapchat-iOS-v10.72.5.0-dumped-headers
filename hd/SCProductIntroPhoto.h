//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NYTPhoto.h"

@class NSAttributedString, NSData, NSString, UIImage;

@interface SCProductIntroPhoto : NSObject <NYTPhoto>
{
    UIImage *_image;
    NSData *_imageData;
    UIImage *_placeholderImage;
    NSAttributedString *_attributedCaptionTitle;
    NSAttributedString *_attributedCaptionSummary;
    NSAttributedString *_attributedCaptionCredit;
}

@property(retain, nonatomic) NSAttributedString *attributedCaptionCredit; // @synthesize attributedCaptionCredit=_attributedCaptionCredit;
@property(retain, nonatomic) NSAttributedString *attributedCaptionSummary; // @synthesize attributedCaptionSummary=_attributedCaptionSummary;
@property(retain, nonatomic) NSAttributedString *attributedCaptionTitle; // @synthesize attributedCaptionTitle=_attributedCaptionTitle;
@property(retain, nonatomic) UIImage *placeholderImage; // @synthesize placeholderImage=_placeholderImage;
@property(retain, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

