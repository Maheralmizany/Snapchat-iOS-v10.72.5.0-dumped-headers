//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class SCTopicStickerView;

@interface SCStickerTopicPickerCell : UITableViewCell
{
    SCTopicStickerView *_stickerView;
}

+ (id)reuseIdentifier;
@property(retain, nonatomic) SCTopicStickerView *stickerView; // @synthesize stickerView=_stickerView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setTopic:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
