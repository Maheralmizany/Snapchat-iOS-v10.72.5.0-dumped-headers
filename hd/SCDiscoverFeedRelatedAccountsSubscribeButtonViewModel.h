//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString, UIColor, UIImage;

@interface SCDiscoverFeedRelatedAccountsSubscribeButtonViewModel : NSObject <NSCopying>
{
    _Bool _userInteractionEnabled;
    _Bool _showLoadingIndicator;
    NSString *_title;
    UIColor *_titleColor;
    UIColor *_backgroundColor;
    UIColor *_boarderColor;
    UIColor *_loadingIndicatorColor;
    UIImage *_image;
}

@property(readonly, nonatomic) _Bool showLoadingIndicator; // @synthesize showLoadingIndicator=_showLoadingIndicator;
@property(readonly, nonatomic) _Bool userInteractionEnabled; // @synthesize userInteractionEnabled=_userInteractionEnabled;
@property(readonly, copy, nonatomic) UIImage *image; // @synthesize image=_image;
@property(readonly, copy, nonatomic) UIColor *loadingIndicatorColor; // @synthesize loadingIndicatorColor=_loadingIndicatorColor;
@property(readonly, copy, nonatomic) UIColor *boarderColor; // @synthesize boarderColor=_boarderColor;
@property(readonly, copy, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(readonly, copy, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTitle:(id)arg1 titleColor:(id)arg2 backgroundColor:(id)arg3 boarderColor:(id)arg4 loadingIndicatorColor:(id)arg5 image:(id)arg6 userInteractionEnabled:(_Bool)arg7 showLoadingIndicator:(_Bool)arg8;

@end

