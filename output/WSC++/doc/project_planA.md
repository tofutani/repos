# プロジェクトA計画書 #

本書は20TM ADX-ECUに 搭載されるApplication Framework(以下、AppFW)の開発プロジェクトの計画書である。

## 1. プロジェクトの概要 ##

### 1.1 プロジェクトの目的、目標 ###

* AppFW_A はADX-ECU およびその開発環境(PC、DDPX(*1))において、アプリケーション(認識ロジック、プランニングロジック、IO ロジック) の駆動およびアプリケーション間のデータ伝搬を担う
モジュールである。

* AppFW 開発プロジェクトの主要な目標は下記である。

  * AppFW により、アプリケーション開発ユーザーが開発環境およびADX-ECU にてプログラムコードの修正・改変無く開発・検証が行えること
  * AppFW を号口品質のモジュールとして完成させ、20TM システムの一部としてラインオフできること

### 1.2 プロジェクトの範囲 ###

* AppFW および周辺開発環境の開発・リリースがプロジェクトの範囲である。具体的に下記に挙げる。
  * 20TM ADX-ECU に搭載(車載)されるAppFW (以下、車載版AppFW) の開発とリリース
      * ADX-ECU 内上位設計からの機能要求、非機能要求、機能安全要求を分析・設計し実装したもの
  * アプリケーションの開発基盤として、PC、DDPX 上で動作するAppFW の開発とリリース
    * アプリケーションの機能、開発効率向上を実現するための要求を受け分析・設計し実装したもの
    * 搭載版AppFW とは同一のコードベースで開発され、差異は極小化されるべきもの
  * AppFW およびアプリケーションをビルドするためのビルドシステム
  * AppFW の品質を向上・担保するためのCI を始めとする開発環境

### 1.3 前提条件および制約条件 ###

* 車載版AppFW は要求分析から設計実装、評価までを1つの組織(現 TRI-AD Middleware function) で担当する。従来開発で行われてきた、OEM による仕様開発とサプライヤによる設計実装のような分断開発は行わない。

* ECU および車両の開発日程はトヨタ自動車のスケジュールに従うものとする。TRI-AD 内にて別途詳細な開発マイルストーンが設定された場合、前記に加えてこれに従うものとする。

### 1.4 プロジェクト成果物 ###


| 成果物名 | リリース目標 | 担当者 | 参照先 | リンク |
| --- | --- | --- | --- | --- |
| プログラムソースコード | 全テスト合格、品質指標合格 | Developer | GitHub | [リンク](http://auto-drive-git.cp.toyota.co.jp/ADX/adx) |
| ソフトウェア要求仕様書 | 要求元合意 | Product Owner | GitHub | [リンク](http://auto-drive-git.cp.toyota.co.jp/AppFW/appfw_doc/blob/develop/src/appfw/requirements.md) |
| アーキテクチャ設計書 | レビュー承認 | Developer | GitHub | T.B.D. |
| 機能仕様書(AppFW マニュアル) | レビュー承認 | Developer | GitHub | [リンク](http://auto-drive-git.cp.toyota.co.jp/ADX/adx/tree/develop/doc/appfw) |
| 結合テスト仕様書 | レビュー承認 | Developer | GitHub | Doxygen にてプログラムソースコードに記載 |
| 結合テストソースコード | レビュー承認 | Developer | GitHub | プログラムソースコード中の`src/apps/TestAppfwApp*` ディレクトリ |
| 機能ユニット仕様書(兼 設計書) | レビュー承認 | Developer | GitHub | Doxygen にてプログラムソースコードに記載 |
| 機能ユニットテスト仕様書 | レビュー承認 | Developer | GitHub | Doxygen にてプログラムソースコードに記載 |
| 機能ユニットテストソースコード | レビュー承認 | Developer | GitHub | プログラムソースコード中の`src/appfw/` 以下の`test` ディレクトリ |
| ソフトウェアユニット仕様書(兼 設計書) | レビュー承認 | Developer | GitHub | Doxygen にてプログラムソースコードに記載 |
| ソフトウェアユニットテスト仕様書 | レビュー承認 | Developer | GitHub | Doxygen にてプログラムソースコードに記載 |
| ソフトウェアユニットテストソースコード | レビュー承認 | Developern | GitHub | プログラムソースコード中の`src/appfw/` 以下の`test` ディレクトリ |

### 1.5 スケジュール ###

* 大日程

  * [20TM 開発マイルストン](http://jaaplh001:8080/secure/WBSGanttMain.jspa?filter=BOARD_22)

* AppFW 開発日程

  * [AppFW 開発マイルストン](http://jaaplh001:8080/secure/WBSGanttMain.jspa?filter=BOARD_120)

### 1.6 計画の更新 ###

* AppFW の開発計画も上記"AppFW 開発マイルストン" に記載する。
* この計画表は20TM のプロジェクトマネジメントチーム(Project Management function) の管理下に置かれているため、更新時は自動的にプロジェクトマネジメントチームに届く。
* 計画の変更について、計画表の更新時に承認プロセスは存在しない。それに代わり、プロジェクトマネジメントチームにより進捗確認(マイルストンに対する成果物リリースの予実)が行われる。


## 2. 参照・定義 ##

プロジェクト外部からの要求・制約を記したドキュメントを下記に記載する。ファイルリンクのあるものは現時点での最新版であり、最終版でないものもある。

| 文書名 | 参照先 | リンク  |
| --- | ---| ---- |
| ソフトウェアテスト計画書 | Google Drive | [リンク](https://drive.google.com/drive/u/0/folders/1WmMyB9q3tzKehv-9hMAJ57CMoN3lFxYK) |
| ADX SoC ソフト部品構造設計書(SDS) | Google Drive | [リンク](https://drive.google.com/drive/u/0/folders/1Wb4qhLY_kdOQne0N2IW1PzyIKYHkW7Vo) |
| ADX SoC ソフトウェア要求仕様書(SRS) | Google Drive | [リンク](https://drive.google.com/drive/u/0/folders/1WjVctgO-AOrHZetUBfgGMvKp38Uml5DR) |
| ADX SoC 機能安全要求 | Google Drive | T.B.D. |
| QNX OS for Safety 2.x Safety Manual | Google Drive | [リンク](https://drive.google.com/drive/u/0/folders/1X-tAxPZ8DGn9v97f7hIkBEPp_beyCJV0) |
| DriveOS SEOOC | Google Drive | [リンク](https://drive.google.com/drive/u/0/folders/1WwdB38Tmt672QZopGmbdf7unlE8sKGKn) |
| ADX Process | GitHub | [リンク](http://auto-drive-git.cp.toyota.co.jp/ADX/adx_process) |
| TRI-AD CodingStandard | GitHub | [リンク](http://auto-drive-git.cp.toyota.co.jp/QA/coding_standard) |
| AppFW コーディングルール| GitHub | [リンク](http://auto-drive-git.cp.toyota.co.jp/AppFW/appfw_doc/blob/develop/src/appfw/coding_rules.md) |
| ADX AppFW テスト方針 | GitHub | [リンク](http://auto-drive-git.cp.toyota.co.jp/AppFW/appfw_doc/blob/develop/src/appfw/test/appfw_test.md) |


## 3. 体制 、役割

### プロジェクト体制 ###


* TRI-AD Middleware Function が主たるプロジェクトメンバである。下記にメンバを列挙する。
  * Masaki Tatezono
  * Hironori Seki
  * Katsuya Tanabe
  * Seiya Miyagaki
  * Ryo Motoike
  * Yuta Marunaka
  * Ken Totsuka
  * Kodai Kawane

* 委託開発会社・メンバについては流動的なため記載を省略する。

* 役割と上記メンバのアサインを記す。

| 役割(ロール)名 | 役割説明 | アサイン |
| --- | --- | --- |
| プロジェクト管理者 | プロジェクト計画書作成、進捗管理 | Masaki Tatezono |
| Product Owner | AppFW の要求・要件決定 | Masaki Tatezono |
| Developer | AppFW の要求分析〜実装・評価 | Function メンバ全員 |
| Scrum Master | AppFW スクラムを円滑な実施 | Developer で持ち回り(2week) |

### プロジェクト外部との関係 ###

| 内容 | 頻度 | コミュニケーション形態 | 担当者 |
| --- | --- | --- | --- |
| 要求回答、仕様確認 | 適宜 | メール、Slack | Developer |
| 進捗報告 | 更新事象発生時 | JIRA | プロジェクト管理者 |


## 4. リソース計画 ##

### 人員計画 ###

* 車載版AppFW については、ユーザー要求に対する迅速な対応、高品質な設計実装の実現のため、TRI-AD Middleware Function メンバ(旧TMC 4JT1G) による内製開発を行う。
* 車載版AppFW を除く開発環境については、委託等の外部リソースの活用を行い、アプリケーション開発者のニーズに応じた環境の提供を行う。
* 当プロジェクトはScrum により開発を行う。チームメンバは上限で9名とし、この範囲で可能な限りの生産性向上を行いながらプロジェクト期間内に達成可能な成果物をリリースする。
  * 制御不可能な開発スコープの増大に対しては、別途リソース調整を行なった別チームでの対応とする。現チームの分割等が発生した場合、本プロジェクト計画書は無効となり再計画を行う。

### 開発環境 ###

* 必要なインフラツール
  * GitHub, JIRA, Jenkins(いずれもIT-Support チームにより調達済み)
* 必要なマシンリソース
  * ハイエンドPC を1人1台以上
    * CPU 8 コア以上(Hyper threading 含む)
    * RAM 32GB 以上
    * Ubuntu 16.04 以降
    * CUDA10 が実行可能なNVIDIA GPU ボード
  * CI 実行マシンとして上記ハイエンドPC 相当を5台程度
  * ECU SoC 模擬環境としてDDPXを3台
* 必要なソフトウェア
  * 静的解析ツールC++Test(*2)
  * QNX OS for Safety 開発ツール一式(*3)


## 5. 作業計画 ##

### プロジェクト期間 ###

* 20TM のプロジェクト期間と一致

### マイルストーン ###

* 大日程は20TM のプロジェクト期間と一致

### チーム内マイルストン ###

| イベント | 日付 | 担当者 |
| --- | --- | --- |
| SprintPlanning | 水曜日(2週ごと) | Developer, プロジェクト管理者 |
| SprintReview | 火曜日(2週ごと) | Developer, プロジェクト管理者 |
| Retrospective | 火曜日(2週ごと) | Developer, ScrumMaster |
| 成果物レビュー | 適宜GitHub にて | Developer |
| 他チームへのリリース | 大日程 | プロジェクト管理者 |


## 6. 品質保証計画 ##

### レポジトリ運用ルールによる品質保証 ###

* Git Flow に基づいたブランチ戦略を採用する。
* develop へのマージ時にPull-Request を発行し、チーム内でレビューを行う。3件以上のApprove およびCI でのテスト全件通過をマージ条件とする。

### コード品質維持のために ###

* `TRI-AD CodingStandard` の遵守をC++Test にて確認する。
* チーム内で制定・メンテする`AppFW コーディングルール` を遵守したコーディングを行う。
* チーム内で制定・メンテする`ADX AppFW テスト方針` を遵守したテストを行う。
* コンパイル警告は0件維持を行う。
* スプリントでの機能追加・変更の際にテストも合わせて開発し、全件通過を必須とする。テストの無いコードはマージしない。

### 要求に合致したものを提供するために ###

* 要求から要件、設計、実装、テストまでをトレース可能なID を付与する。
* 要求変更時にはID を用いて影響波及範囲を分析し、適切な追加・修正を行う。


## 7. リスク管理計画 ##

* リスク事項が発生した場合、JIRA のプロダクトバックログに記録され、Planning 時に確認を行う。

## 8. その他・付録 ##

* (*1) : 通称DDPX。市販品としての商品名はDRIVE AGX Xavier [URL](https://developer.nvidia.com/drive/drive-agx)
* (*2) : 静的解析ツール。コーディングルールであるMISRA や静的フロー解析が可能 [URL](http://www.techmatrix.co.jp/product/ctest/index.html)
* (*3) : BlackBerry 社のISO26262 対応のOS [URL](http://blackberry.qnx.com/jp/products/certified_os/safe-kernel)
