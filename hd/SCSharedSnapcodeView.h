//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class SVGDocumentView, UIImageView, UILabel;

@interface SCSharedSnapcodeView : UIView
{
    UIView *_snapcodeContainer;
    SVGDocumentView *_snapcodeView;
    UIImageView *_imageView;
    UILabel *_usernameLabel;
    UILabel *_snapToAddLabel;
}

+ (id)createSharedSnapcodeViewWithSnapcode:(id)arg1 username:(id)arg2;
@property(retain, nonatomic) UILabel *snapToAddLabel; // @synthesize snapToAddLabel=_snapToAddLabel;
@property(retain, nonatomic) UILabel *usernameLabel; // @synthesize usernameLabel=_usernameLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) SVGDocumentView *snapcodeView; // @synthesize snapcodeView=_snapcodeView;
@property(retain, nonatomic) UIView *snapcodeContainer; // @synthesize snapcodeContainer=_snapcodeContainer;
- (void).cxx_destruct;
- (void)updateBitmojiImage:(id)arg1;
- (void)updateProfileImage:(id)arg1;
- (void)updateSnapcode:(id)arg1 username:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

