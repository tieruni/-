//
//  HCDTranslator.h
//  12适配器模式
//
//  Created by 黄成都 on 15/8/14.
//  Copyright (c) 2015年 黄成都. All rights reserved.
//

#import "HCDPlayer.h"
//外籍?
@class HCDForeignCenter;
//中锋
@interface HCDTranslator : HCDPlayer
@property(nonatomic,strong)HCDForeignCenter *foreigncenter;
@end
