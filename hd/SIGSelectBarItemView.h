//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class SIGLabel, UIImageView;

@interface SIGSelectBarItemView : UIView
{
    UIView *_backgroundView;
    UIImageView *_imageView;
    SIGLabel *_commaLabel;
    SIGLabel *_textLabel;
    unsigned long long _type;
    id <SIGSelectBarItem> _item;
}

@property(retain, nonatomic) id <SIGSelectBarItem> item; // @synthesize item=_item;
- (void).cxx_destruct;
@property(nonatomic) _Bool hasComma;
- (struct CGSize)intrinsicContentSize;
- (id)initWithItem:(id)arg1 title:(id)arg2 type:(unsigned long long)arg3;

@end

