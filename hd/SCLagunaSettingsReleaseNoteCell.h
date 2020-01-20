//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class SCLagunaReleaseNote, UIImage, UIImageView, UILabel;

@interface SCLagunaSettingsReleaseNoteCell : UITableViewCell
{
    _Bool _isNewNote;
    SCLagunaReleaseNote *_releaseNote;
    UIImage *_releaseNoteThumbnail;
    UILabel *_titleLabel;
    UILabel *_bodyLabel;
    UIImageView *_thumbnailView;
    UIImageView *_starView;
}

+ (double)heightForNote:(id)arg1 cellWidth:(double)arg2;
@property(retain, nonatomic) UIImageView *starView; // @synthesize starView=_starView;
@property(retain, nonatomic) UIImageView *thumbnailView; // @synthesize thumbnailView=_thumbnailView;
@property(retain, nonatomic) UILabel *bodyLabel; // @synthesize bodyLabel=_bodyLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) _Bool isNewNote; // @synthesize isNewNote=_isNewNote;
@property(retain, nonatomic) UIImage *releaseNoteThumbnail; // @synthesize releaseNoteThumbnail=_releaseNoteThumbnail;
@property(retain, nonatomic) SCLagunaReleaseNote *releaseNote; // @synthesize releaseNote=_releaseNote;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

