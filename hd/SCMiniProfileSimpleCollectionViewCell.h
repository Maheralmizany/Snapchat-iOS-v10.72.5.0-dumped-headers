//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCMiniProfileCollectionViewCell.h"

@class NSString, UIImage, UIImageView, UILabel;

@interface SCMiniProfileSimpleCollectionViewCell : SCMiniProfileCollectionViewCell
{
    UILabel *_textLabel;
    UILabel *_detailTextLabel;
    UIImageView *_imageView;
    _Bool _disabled;
    UIImage *_image;
}

@property(nonatomic) _Bool disabled; // @synthesize disabled=_disabled;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *detailText;
@property(copy, nonatomic) NSString *text;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end

