//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCBaseShakeReportViewController.h"

@class NSString, SCShakeConfiguration;

@interface SCInternalShakeReportViewController : SCBaseShakeReportViewController
{
    NSString *_projectName;
    NSString *_subProjectName;
    NSString *_jiraMetaInfo;
    SCShakeConfiguration *_configuration;
}

@property(retain, nonatomic) SCShakeConfiguration *configuration; // @synthesize configuration=_configuration;
@property(copy, nonatomic) NSString *jiraMetaInfo; // @synthesize jiraMetaInfo=_jiraMetaInfo;
@property(copy, nonatomic) NSString *subProjectName; // @synthesize subProjectName=_subProjectName;
@property(copy, nonatomic) NSString *projectName; // @synthesize projectName=_projectName;
- (void).cxx_destruct;

@end
