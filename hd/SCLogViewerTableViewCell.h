//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class SCLogViewerLoggedEvent, UILabel;

@interface SCLogViewerTableViewCell : UITableViewCell
{
    UILabel *_parametersLabel;
    SCLogViewerLoggedEvent *_event;
}

+ (double)cellHeightForEvent:(id)arg1 withDetails:(_Bool)arg2 forWidth:(double)arg3;
+ (void)initialize;
@property(retain, nonatomic) SCLogViewerLoggedEvent *event; // @synthesize event=_event;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

